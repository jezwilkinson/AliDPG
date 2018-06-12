AliGenerator *GeneratorCustom(TString opt = "")

{ // Generator for dedicated Ds production in pp for MVA training

  Decay_t decay = AliDecayer::kPythia6HeavyDecay_Hadrons;

//  AliGenCocktail *ctl = GeneratorCocktail("Perugia2011_HF");
  AliGenPythia* pyth = GeneratorPythia6(kPythia6Tune_Perugia2011);
  pyth->SetProcess(kPyCharmppMNRwmi);
  pyth->SetTriggerParticle(431,999,999,-1,1000); //Ds, etamin, etamax, ptmin, ptmax
  pyth->SetTriggerY(1.0);
  pyth->SetHeavyQuarkYRange(-1.5,1.5);
  pyth->SetForceDecay(decay[idecay]);
  pyth->SetPtHard(pthardminConfig,pthardmaxConfig);
  return pyth;

}
