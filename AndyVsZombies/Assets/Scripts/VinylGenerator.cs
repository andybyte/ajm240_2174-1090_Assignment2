using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylGenerator : MonoBehaviour {

	public Rigidbody2D vinyl;
	public int counter;

	// Use this for initialization
	void Start () {

		// Initialize counter.
		counter = 0;
	}
	
	// Update is called once per frame
	void Update () {

		if (counter == 0) {
			counter++;

			Rigidbody2D vinylClone = (Rigidbody2D)Instantiate (vinyl, transform.position, transform.rotation);

		}
		
	}

	public void CreateVinyl() {
		Rigidbody2D vinylClone = (Rigidbody2D)Instantiate (vinyl, transform.position, transform.rotation);
	}
}
