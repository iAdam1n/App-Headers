/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MNMessageContextMenuAction : NSObject {

	NSString* _title;
	UIImage* _image;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id actionBlock;                     //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithTitle:(id)arg1 image:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(NSString *)title;
-(UIImage *)image;
-(id)actionBlock;
@end
