using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FieldController : MonoBehaviour {
	public AudioSource zombieLeft;
	public AudioSource youLose;
	public Text loser;
	public Text misses;
	public int intMiss;

	// Use this for initialization
	void Start () {

		// Missed Zombie init.
		intMiss = 0;
		UpdateMisses (intMiss);
		loser.text = "";
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D (Collider2D other){

		// Count missed zombies and end game if 5 get through.
		if (other.gameObject.CompareTag ("Zombie")) {
			zombieLeft.Play();
			intMiss += 1;
			UpdateMisses (intMiss);
			Destroy (other.gameObject);

			if (intMiss == 5) {
				loser.text = "You let too many zombies eat your friends.";
				youLose.Play ();
			}
		}
	}

	// Update Missed Zombie UI.
	void UpdateMisses (int count) {
		misses.text = "Misses: " + intMiss + "/5";
	}
}
