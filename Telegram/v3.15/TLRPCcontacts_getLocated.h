/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class TLInputGeoPoint;

@interface TLRPCcontacts_getLocated : TLMetaRpc {

	BOOL _hidden;
	int _radius;
	int _limit;
	TLInputGeoPoint* _geo_point;

}

@property (nonatomic,retain) TLInputGeoPoint * geo_point;              //@synthesize geo_point=_geo_point - In the implementation block
@property (assign,nonatomic) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int radius;                               //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) int limit;                                //@synthesize limit=_limit - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setGeo_point:(TLInputGeoPoint *)arg1 ;
-(TLInputGeoPoint *)geo_point;
-(void)setHidden:(BOOL)arg1 ;
-(void)setRadius:(int)arg1 ;
-(int)radius;
-(Class)responseClass;
-(BOOL)hidden;
-(void)setLimit:(int)arg1 ;
-(int)limit;
@end
