/*********************************************
**
**	Created on: 	09/04/2015 2015
**	Author: 	matt - Matt Edmunds
**	File:		OptimisationRun.cpp
**
**********************************************/

#include <QDebug>
#include <QPointF>
#include <QRectF>
#include <iostream>
#include "BoundaryPoint.h"

BoundaryPoint::BoundaryPoint(qreal xcoord, qreal ycoord) :
    mCoord(xcoord,ycoord),
    //  initial bounding box
    mControlPointRect(-0.01,-0.01,0.02,0.02)
{
}

void BoundaryPoint::setControlPoint(bool isCtl) {
    mIsControlPoint = isCtl;
}

QRectF BoundaryPoint::controlPointRect() {
    return mControlPointRect;
}

qreal BoundaryPoint::x() const {
    return mCoord.x();
}

qreal BoundaryPoint::y() const {
    return mCoord.y();
}

uint BoundaryPoint::getSmoothing() {
    return mSmooth;
}

float BoundaryPoint::getSmoothFactor() {
    return mSmooth / 10.0;
}

void BoundaryPoint::setSmoothing(uint smoothing) {
    mSmooth = smoothing;
}

bool BoundaryPoint::isControlPoint() {
    return mIsControlPoint;
}

void BoundaryPoint::setTopLeftBound(QPointF pos) {
    mControlPointRect.setTopLeft(pos);
}

void BoundaryPoint::setBottomRightBound(QPointF pos) {
    mControlPointRect.setBottomRight(pos);
}

QRectF BoundaryPoint::setControlPointRect(QRectF ctlPointRect) {
    mControlPointRect = ctlPointRect;
}

QPointF BoundaryPoint::pos() {
    return mCoord;
}
