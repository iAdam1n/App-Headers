/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLVNickListViewModelSection : NSObject {

	NSString* _mode;
	NSArray* _nicks;

}

@property (nonatomic,copy,readonly) NSString * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nicks;              //@synthesize nicks=_nicks - In the implementation block
-(NSArray *)nicks;
-(id)initWithMode:(id)arg1 nicks:(id)arg2 ;
-(id)verboseName;
-(NSString *)mode;
@end
