using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylGenerator : MonoBehaviour {

	public Rigidbody2D vinyl;
	private Rigidbody2D vinylClone;
	public AudioSource soundFX;
	public AudioSource smash;
	public Rigidbody2D spinner;

	// Create vinyl and hide spinner.
	void Start () {
		spinner.GetComponent<Renderer>().enabled = false;
		CreateVinyl ();
	}
	
	// Keep spinner with core vinyl. If vinyl leaves screen destroy it and create another.
	void Update () {

		spinner.position = vinylClone.position;

		if (vinylClone.position.x > 12.0f) {
			Destroy (vinylClone.gameObject);
			CreateVinyl ();
		}
		
	}

	// Create a vinyl record and pass on objects VinylBehavior needs.
	private void CreateVinyl() {
		
		vinylClone = (Rigidbody2D)Instantiate (vinyl, transform.position, transform.rotation);
		vinylClone.GetComponent<VinylBehavior> ().soundFX = soundFX;
		vinylClone.GetComponent<VinylBehavior> ().spinner = spinner;
		vinylClone.GetComponent<VinylBehavior> ().smash = smash;

		// Show core vinyl and hide spinner until we throw it.
		spinner.GetComponent<Renderer>().enabled = false;
		vinylClone.GetComponent<Renderer>().enabled = true;
	}
}
