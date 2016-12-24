/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSDictionary;

@interface AMAWeblabManager : NSObject {

	NSUserDefaults* _defaults;
	NSDictionary* _weblabsDictionary;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,copy) NSDictionary * weblabsDictionary;              //@synthesize weblabsDictionary=_weblabsDictionary - In the implementation block
+(id)sharedAMAWeblabManager;
-(id)initWithDefaults:(id)arg1 ;
-(void)setWeblabsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)weblabsDictionary;
-(id)getWeblabTreatmentGivenFeature:(id)arg1 default:(id)arg2 ;
-(void)clearWeblabs;
-(void)persistWeblabProperties:(id)arg1 ;
-(id)init;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
@end
