/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemVideo, FBTarotObservable;

@interface FBTarotVideoEntity : NSObject {

	FBMemVideo* _video;
	FBTarotObservable* _observablePosterImageEntity;

}

@property (nonatomic,readonly) FBMemVideo * video;                                           //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBTarotObservable * observablePosterImageEntity;              //@synthesize observablePosterImageEntity=_observablePosterImageEntity - In the implementation block
-(id)initWithVideo:(id)arg1 observablePosterImageEntity:(id)arg2 ;
-(FBTarotObservable *)observablePosterImageEntity;
-(FBMemVideo *)video;
@end
