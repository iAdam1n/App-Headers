/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapSnapshotter.h>

@class WAMapSnapshotterRequest;

@interface WAMapSnapshotter : MKMapSnapshotter {

	WAMapSnapshotterRequest* _deferredRequest;
	WAMapSnapshotter* _retainedSelf;

}
-(void)wa_startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wa_applicationDidBecomeActive:(id)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end
