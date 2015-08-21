/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

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
-(NSArray *)mapPoints;
-(id)initWithMapPoints:(id)arg1 routeComplete:(BOOL)arg2 regionLatitude:(double)arg3 regionLongitude:(double)arg4 regionSpanLat:(double)arg5 regionSpanLon:(double)arg6 ;
-(BOOL)routeComplete;
-(double)regionLatitude;
-(double)regionLongitude;
-(double)regionSpanLat;
-(double)regionSpanLon;
@end

