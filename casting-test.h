//
// Created by Federico on 25/09/2021.
//

#ifndef PRIMOPROGETTO_C_CASTING_TEST_H
#define PRIMOPROGETTO_C_CASTING_TEST_H

#endif //PRIMOPROGETTO_C_CASTING_TEST_H

typedef struct {
    int x;
    int y;
} DiscretePoint;

typedef struct {
    float x;
    float y;
} RealPoint;

void testCasting() {
    printf("[CastingTest.testCasting] START\n");

    DiscretePoint p1 = {x: 1100123200, y: 1000000000};
    DiscretePoint* p_p1 = &p1;

    // rappresentazione originale
    printf("x: %d\ty: %d\n", p_p1->x, p_p1->y);

    // la rappresentazione binaria degli originali x e y rappresentata come float:
//    RealPoint p_p3 = (RealPoint) p_p1; // NON SI PUO FARE
    RealPoint* p_p2 = (RealPoint*) p_p1; // casting tra puntatori
    printf("x: %f\ty: %f\n", p_p2->x, p_p2->y);

}
