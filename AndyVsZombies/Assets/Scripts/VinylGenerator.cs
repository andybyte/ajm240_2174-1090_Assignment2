using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylGenerator : MonoBehaviour {

	public Rigidbody2D vinyl;
	private Rigidbody2D vinylClone;
	public AudioSource soundFX;
	public AudioSource smash;
	public Rigidbody2D spinner;

	// Use this for initialization
	void Start () {
		spinner.GetComponent<Renderer>().enabled = false;
		CreateVinyl ();
	}
	
	// Update is called once per frame
	void Update () {

		spinner.position = vinylClone.position;

		if (vinylClone.position.x > 12.0f) {
			Destroy (vinylClone.gameObject);
			CreateVinyl ();
		}
		
	}

	private void CreateVinyl() {
		
		vinylClone = (Rigidbody2D)Instantiate (vinyl, transform.position, transform.rotation);
		vinylClone.GetComponent<VinylBehavior> ().soundFX = soundFX;
		vinylClone.GetComponent<VinylBehavior> ().spinner = spinner;
		vinylClone.GetComponent<VinylBehavior> ().smash = smash;

		spinner.GetComponent<Renderer>().enabled = false;
		vinylClone.GetComponent<Renderer>().enabled = true;
	}
}
