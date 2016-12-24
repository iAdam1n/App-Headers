/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUserName, UIImage;

@interface FBWebRTCActiveAudioSpeakerViewModel : FBValueObject <NSCopying> {

	FBMUserName* _name;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) FBMUserName * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
-(id)initWithName:(id)arg1 image:(id)arg2 ;
-(FBMUserName *)name;
-(UIImage *)image;
@end
