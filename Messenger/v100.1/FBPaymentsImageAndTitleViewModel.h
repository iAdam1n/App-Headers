/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsImage, NSString;

@interface FBPaymentsImageAndTitleViewModel : FBValueObject <NSCopying> {

	FBPaymentsImage* _image;
	NSString* _title;

}

@property (nonatomic,copy,readonly) FBPaymentsImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
-(id)initWithImage:(id)arg1 title:(id)arg2 ;
-(NSString *)title;
-(FBPaymentsImage *)image;
@end
