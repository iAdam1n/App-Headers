/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBStickerResourceTypeConfig : FBValueObject <NSCopying> {

	BOOL _preloadable;
	NSString* _namePrefix;
	NSString* _fileExtension;
	CGSize _maxSize;

}

@property (nonatomic,readonly) CGSize maxSize;                             //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * namePrefix;                 //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension;              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) BOOL preloadable;                           //@synthesize preloadable=_preloadable - In the implementation block
-(id)initWithMaxSize:(CGSize)arg1 namePrefix:(id)arg2 fileExtension:(id)arg3 preloadable:(BOOL)arg4 ;
-(BOOL)preloadable;
-(CGSize)maxSize;
-(NSString *)fileExtension;
-(NSString *)namePrefix;
@end
