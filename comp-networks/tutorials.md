T.A : Aida

## Tutorial #1
- *Binary* to Octal & Hex Conversions

0.1 >> To Hex

Multiply by Base, and Take Int

0.1 * 16 = 1.6 *(1)*
0.6 * 16 = 9.6 *(9)*
...

0.1 >> Hex >> 0.19999 and so on

---

* 137       *(b10)*
* 1000 1001 *(b2)*
* 8    9    *(b16)*

...

---

## Tutorial #2

* ( Q1 )

Antennas from 1 cm to 5 meters: What Frequency Range does it cover?

*c* Speed of Light, 3 * 10^8 m/sec 
*f* Frequency in Hertz

**LAMBDA** = c / f

For **LAMBDA** = 1 cm, 0.01 m

f = (3 * 10^8 / 0.01) = 30,000,000,000 Hz = 30 GHz

For F = 5m, it's 60 MHz, so

    (5 m bound, to 0.01 bound)
This *Band* Covers 60 MHz to 30 GHz

---

Ten Signal, Each requiring 4000 Hz, are multiplexed using FDM
- What is minimum bandwidth for multiplexed channel?
- Assume that guard Bands are 400 Hz

**Sollution:**

Given 10 Signals (Bands) we have **9** Guards

4000 Hz * 10 + 400 Hz * 9 = 43,600 Hz

---

3 Packet Switching Networks
Each Contains N nodes

* First Network has *STAR* Topology
    - With Central Switch

* Second Network is a Bi-Directional Ring

* Third is Fully Interconnected with a wire from every node to every node.. *Mesh Topology*

**Q:** What's the worst, best, and Average Transmission path

* **First:** Best, Worst, Avg is all 2 *(Sends from 1 node, to switch to other node 2 Transmissions)*

* **Second:** Best: 1, Worst: *N/2*, Avg is: *N/4* 

* **Third** Best: 1, Worst: 1, Avg: 1

---

Compare the delay in sending an x-bit message over a k-hop path in a circuit switched network (lightly loaded)
- Packet switched Network, The Circuit setup time is s sec, the propagation delay is d *sec per hop* and packet size is **P bits** 
and data rate is **b bps**

Under what conditions does the Packet Network have a lower delay?

Also, explain the conditions under which a packet-switched network is preferable to a circuit switched network

Packet switching is faster if :
`s + x/b + k/d > x/b + (k-1) p/b + k*d`

---

6.)

x = 1 MB (1,000,000 Bytes), h = 64 Bytes

`x/p` Packets is needed *(Total Packets)*

`packet size * n. packets`
Total Data: `(p+h) * x / p`

Retransmission of last packet by intermediate routers *In packet switching* is `(k-1) * (p+h) / b`

Minimizing this quantity (T) with respect to p, we find the packet size equation, and then differentiate...

P is packet Size:

`p = sqrt(hx/(k-1))`