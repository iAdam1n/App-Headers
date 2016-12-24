/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MNNearbyPlaceCellViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowImage;
	NSURL* _imageUrl;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSURL * imageUrl;                 //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowImage;                  //@synthesize shouldShowImage=_shouldShowImage - In the implementation block
-(NSURL *)imageUrl;
-(id)initWithImageUrl:(id)arg1 title:(id)arg2 subtitle:(id)arg3 shouldShowImage:(BOOL)arg4 ;
-(BOOL)shouldShowImage;
-(NSString *)title;
-(NSString *)subtitle;
@end
