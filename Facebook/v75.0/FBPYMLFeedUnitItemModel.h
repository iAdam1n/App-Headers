/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, FBMemTextWithEntities, FBMemPage, FBMemSponsoredData;

@interface FBPYMLFeedUnitItemModel : FBValueObject <NSCopying> {

	NSArray* _contentSet;
	NSString* _hideableToken;
	FBMemTextWithEntities* _likeSentence;
	FBMemTextWithEntities* _socialContext;
	FBMemPage* _profile;
	FBMemSponsoredData* _sponsoredData;
	NSString* _tracking;

}

@property (nonatomic,copy,readonly) NSArray * contentSet;                               //@synthesize contentSet=_contentSet - In the implementation block
@property (nonatomic,copy,readonly) NSString * hideableToken;                           //@synthesize hideableToken=_hideableToken - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * likeSentence;               //@synthesize likeSentence=_likeSentence - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * socialContext;              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy,readonly) FBMemPage * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) FBMemSponsoredData * sponsoredData;                 //@synthesize sponsoredData=_sponsoredData - In the implementation block
@property (nonatomic,copy,readonly) NSString * tracking;                                //@synthesize tracking=_tracking - In the implementation block
-(FBMemTextWithEntities *)socialContext;
-(FBMemSponsoredData *)sponsoredData;
-(NSString *)hideableToken;
-(FBMemTextWithEntities *)likeSentence;
-(NSArray *)contentSet;
-(id)initWithContentSet:(id)arg1 hideableToken:(id)arg2 likeSentence:(id)arg3 socialContext:(id)arg4 profile:(id)arg5 sponsoredData:(id)arg6 tracking:(id)arg7 ;
-(NSString *)tracking;
-(FBMemPage *)profile;
@end
