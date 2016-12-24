/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface MNBotComposerMenuViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowTypeMessageRow;
	NSString* _pageID;
	NSArray* _CTAViewModels;

}

@property (nonatomic,copy,readonly) NSString * pageID;                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * CTAViewModels;               //@synthesize CTAViewModels=_CTAViewModels - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTypeMessageRow;              //@synthesize shouldShowTypeMessageRow=_shouldShowTypeMessageRow - In the implementation block
-(NSArray *)CTAViewModels;
-(BOOL)shouldShowTypeMessageRow;
-(id)initWithPageID:(id)arg1 CTAViewModels:(id)arg2 shouldShowTypeMessageRow:(BOOL)arg3 ;
-(NSString *)pageID;
@end
