/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemMessengerMontageComposition;

@interface MNMontageNuxMessage : FBValueObject <NSCopying> {

	NSString* _imageUrl;
	FBMemMessengerMontageComposition* _composition;

}

@property (nonatomic,copy,readonly) NSString * imageUrl;                                         //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) FBMemMessengerMontageComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(id)initWithImageUrl:(id)arg1 composition:(id)arg2 ;
-(NSString *)imageUrl;
-(FBMemMessengerMontageComposition *)composition;
@end
