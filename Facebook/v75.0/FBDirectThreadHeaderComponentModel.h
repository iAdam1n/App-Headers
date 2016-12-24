/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPerson, NSString;

@interface FBDirectThreadHeaderComponentModel : NSObject {

	FBMemPerson* _person;
	NSString* _subtitle;
	double _topInset;
	unsigned long long _actions;

}

@property (nonatomic,readonly) FBMemPerson * person;                  //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) double topInset;                       //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) unsigned long long actions;              //@synthesize actions=_actions - In the implementation block
+(id)modelWithPerson:(id)arg1 subtitle:(id)arg2 topInset:(double)arg3 actions:(unsigned long long)arg4 ;
-(void)setActions:(unsigned long long)arg1 ;
-(unsigned long long)actions;
-(double)topInset;
-(NSString *)subtitle;
-(FBMemPerson *)person;
@end
