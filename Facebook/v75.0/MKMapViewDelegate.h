/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapViewDelegate <NSObject>
@optional
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)mapViewWillStartLoadingMap:(id)arg1;
-(void)mapViewDidFinishLoadingMap:(id)arg1;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
-(void)mapViewWillStartRenderingMap:(id)arg1;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
-(void)mapViewWillStartLocatingUser:(id)arg1;
-(void)mapViewDidStopLocatingUser:(id)arg1;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;

@end
