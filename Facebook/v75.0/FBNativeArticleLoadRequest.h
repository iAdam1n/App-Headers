/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface FBNativeArticleLoadRequest : NSObject {

	unsigned long long _preferredStyle;
	NSProgress* _progress;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) unsigned long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy,readonly) id completion;                             //@synthesize completion=_completion - In the implementation block
-(id)initWithPreferredStyle:(unsigned long long)arg1 progress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completion;
-(unsigned long long)preferredStyle;
-(NSProgress *)progress;
@end
