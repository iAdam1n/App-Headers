/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNBusinessButtonAttribution : FBValueObject <NSCopying> {

	NSString* _pageID;
	NSURL* _pageIconURL;

}

@property (nonatomic,copy,readonly) NSString * pageID;                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * pageIconURL;              //@synthesize pageIconURL=_pageIconURL - In the implementation block
-(id)initWithPageID:(id)arg1 pageIconURL:(id)arg2 ;
-(NSURL *)pageIconURL;
-(NSString *)pageID;
@end
