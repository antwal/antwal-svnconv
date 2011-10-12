
configuration SamplerC
{
  provides {      
      interface Init as SamplerInit;
      interface SplitControl as SamplerControl;
      interface Sample;
      //interface Relay as relay_normally_closed;
      //interface Relay as relay_normally_open;
      command error_t PlugPlay();
 }
}

implementation
{
    components SamplerM, LedsC;
    components new TimerMilliC();

    SamplerM.SamplerInit = SamplerInit;
    SamplerM.SamplerControl = SamplerControl;
    SamplerM.Sample = Sample;
    SamplerM.PlugPlay = PlugPlay;
    SamplerM.SamplerTimer -> TimerMilliC.Timer;
    SamplerM.Leds -> LedsC;

    components new VoltageC();
    SamplerM.Battery -> VoltageC.Read;		

    components new SensirionSht15C() as TempHumC;
    SamplerM.TempHumControl -> TempHumC;
    SamplerM.Temp -> TempHumC.Temperature;
    SamplerM.Hum -> TempHumC.Humidity;
	
    //Digital input channels
    components new MDA300DigitalC() as DioC;
    SamplerM.DioInit -> DioC.Init;
    SamplerM.DioControl -> DioC;
    SamplerM.Dio0 -> DioC.Dio[0];
    SamplerM.Dio1 -> DioC.Dio[1];
    SamplerM.Dio2 -> DioC.Dio[2];
    SamplerM.Dio3 -> DioC.Dio[3];
    SamplerM.Dio4 -> DioC.Dio[4];
    SamplerM.Dio5 -> DioC.Dio[5];

    //Analog channels
    components new MDA300IBADCC() as IBADC;
    SamplerM.IBADCinit -> IBADC.Init;
    SamplerM.IBADCcontrol -> IBADC;
    SamplerM.ADC0 -> IBADC.ADConvert[0];
    SamplerM.ADC1 -> IBADC.ADConvert[1];
    SamplerM.ADC2 -> IBADC.ADConvert[2];
    SamplerM.ADC3 -> IBADC.ADConvert[3];
    SamplerM.ADC4 -> IBADC.ADConvert[4];
    SamplerM.ADC5 -> IBADC.ADConvert[5];
    SamplerM.ADC6 -> IBADC.ADConvert[6];
    SamplerM.ADC7 -> IBADC.ADConvert[7];
    SamplerM.ADC8 -> IBADC.ADConvert[8];
    SamplerM.ADC9 -> IBADC.ADConvert[9];
    SamplerM.ADC10 -> IBADC.ADConvert[10];
    SamplerM.ADC11 -> IBADC.ADConvert[11];
    SamplerM.ADC12 -> IBADC.ADConvert[12];
    SamplerM.ADC13 -> IBADC.ADConvert[13];
    //Analog channel parameters
    SamplerM.SetParam0 -> IBADC.SetParam[0];
    SamplerM.SetParam1 -> IBADC.SetParam[1];
    SamplerM.SetParam2 -> IBADC.SetParam[2];
    SamplerM.SetParam3 -> IBADC.SetParam[3];
    SamplerM.SetParam4 -> IBADC.SetParam[4];
    SamplerM.SetParam5 -> IBADC.SetParam[5];
    SamplerM.SetParam6 -> IBADC.SetParam[6];
    SamplerM.SetParam7 -> IBADC.SetParam[7];
    SamplerM.SetParam8 -> IBADC.SetParam[8];
    SamplerM.SetParam9 -> IBADC.SetParam[9];
    SamplerM.SetParam10 -> IBADC.SetParam[10];
    SamplerM.SetParam11 -> IBADC.SetParam[11];
    SamplerM.SetParam12 -> IBADC.SetParam[12];
    SamplerM.SetParam13 -> IBADC.SetParam[13];

    //Counter channel
    components new MDA300CounterC() as CounterC;
    SamplerM.CounterInit -> CounterC;    
    SamplerM.CounterControl -> CounterC;    
    SamplerM.Counter -> CounterC;
    SamplerM.Plugged -> CounterC;

    //To control relays.
    //components  MDA300RelayC as RelayC;
    //relay_normally_closed = RelayC.relay_normally_closed;
    //relay_normally_open = RelayC.relay_normally_open;
    
    //health channels
    //SamplerM.BatteryControl -> Voltage.StdControl;
    //SamplerM.Battery -> Voltage;

  }
