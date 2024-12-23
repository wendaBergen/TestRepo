void macro() {

  TH1F *h = new TH1F("h1", "title;pt", 100, 0, 10);
  SetCanvas();
  h->Draw("HIST");

}
