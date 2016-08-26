/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNCommerceMapViewModel : FBValueObject <NSCopying> {

	BOOL _routeComplete;
	NSArray* _mapPoints;
	double _regionLatitude;
	double _regionLongitude;
	double _regionSpanLat;
	double _regionSpanLon;

}

@property (nonatomic,copy,readonly) NSArray * mapPoints;              //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) BOOL routeComplete;                    //@synthesize routeComplete=_routeComplete - In the implementation block
@property (nonatomic,readonly) double regionLatitude;                 //@synthesize regionLatitude=_regionLatitude - In the implementation block
@property (nonatomic,readonly) double regionLongitude;                //@synthesize regionLongitude=_regionLongitude - In the implementation block
@property (nonatomic,readonly) double regionSpanLat;                  //@synthesize regionSpanLat=_regionSpanLat - In the implementation block
@property (nonatomic,readonly) double regionSpanLon;                  //@synthesize regionSpanLon=_regionSpanLon - In the implementation block
-(double)regionLatitude;
-(double)regionLongitude;
-(double)regionSpanLat;
-(double)regionSpanLon;
-(NSArray *)mapPoints;
-(id)initWithMapPoints:(id)arg1 routeComplete:(BOOL)arg2 regionLatitude:(double)arg3 regionLongitude:(double)arg4 regionSpanLat:(double)arg5 regionSpanLon:(double)arg6 ;
-(BOOL)routeComplete;
@end
