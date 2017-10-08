package com.ioxxy.a18app;


import java.util.ArrayList;

public class PlacesData {

    //Dichiarazione attributi
    private ArrayList<String> nome;
    private ArrayList<String> indirizzo;
    private ArrayList<String> lat;
    private ArrayList<String> lng;
    private ArrayList<String> type;

    //Costruttore
    public PlacesData(ArrayList<String> nome, ArrayList<String> indirizzo, ArrayList<String> lat, ArrayList<String> lng, ArrayList<String> type) {
        this.nome = nome;
        this.indirizzo = indirizzo;
        this.lat = lat;
        this.lng = lng;
        this.type = type;
    }

    //Getter e Setter
    public ArrayList<String> getNome() {
        return nome;
    }

    public void setNome(ArrayList<String> nome) {
        this.nome = nome;
    }

    public ArrayList<String> getIndirizzo() {
        return indirizzo;
    }

    public void setIndirizzo(ArrayList<String> indirizzo) {
        this.indirizzo = indirizzo;
    }

    public ArrayList<String> getLat() {
        return lat;
    }

    public void setLat(ArrayList<String> lat) {
        this.lat = lat;
    }

    public ArrayList<String> getLng() {
        return lng;
    }

    public void setLng(ArrayList<String> lng) {
        this.lng = lng;
    }

    public ArrayList<String> getType() {
        return type;
    }

    public void setType(ArrayList<String> type) {
        this.type = type;
    }
}
