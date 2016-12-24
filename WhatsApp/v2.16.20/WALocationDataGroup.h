/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSMutableArray, NSString;

@interface WALocationDataGroup : NSObject <MKAnnotation> {

	NSMutableArray* _locations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)baseLocation;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(id)locations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)initWithLocations:(id)arg1 ;
-(unsigned long long)numberOfLocations;
@end
