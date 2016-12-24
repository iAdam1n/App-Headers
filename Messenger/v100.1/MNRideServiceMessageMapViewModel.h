/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNRideServiceMessageMapViewModel : FBValueObject <NSCopying> {

	NSArray* _mapPoints;
	double _regionLatitude;
	double _regionLongitude;
	double _regionSpanLat;
	double _regionSpanLon;

}

@property (nonatomic,copy,readonly) NSArray * mapPoints;              //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) double regionLatitude;                 //@synthesize regionLatitude=_regionLatitude - In the implementation block
@property (nonatomic,readonly) double regionLongitude;                //@synthesize regionLongitude=_regionLongitude - In the implementation block
@property (nonatomic,readonly) double regionSpanLat;                  //@synthesize regionSpanLat=_regionSpanLat - In the implementation block
@property (nonatomic,readonly) double regionSpanLon;                  //@synthesize regionSpanLon=_regionSpanLon - In the implementation block
-(double)regionLatitude;
-(double)regionLongitude;
-(double)regionSpanLat;
-(double)regionSpanLon;
-(NSArray *)mapPoints;
-(id)initWithMapPoints:(id)arg1 regionLatitude:(double)arg2 regionLongitude:(double)arg3 regionSpanLat:(double)arg4 regionSpanLon:(double)arg5 ;
@end
