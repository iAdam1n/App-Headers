/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MKMapViewDelegate.h>

@class NSString;

@interface MNCommerceDeliveryUpdateMapViewHelper : NSObject <MKMapViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_overlaysForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)_viewModelLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 ;
-(id)_annotationsForLocations:(id)arg1 ;
-(id)_blueLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)_lineWithLocations:(id)arg1 color:(id)arg2 alpha:(double)arg3 ;
-(id)_greyLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 ;
-(id)mapViewModelForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
@end
