/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBInstantGameEndNavigationViewConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowLeftButton;
	BOOL _shouldShowRightButton;
	NSString* _middleButtonTitle;

}

@property (nonatomic,readonly) BOOL shouldShowLeftButton;                      //@synthesize shouldShowLeftButton=_shouldShowLeftButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleButtonTitle;              //@synthesize middleButtonTitle=_middleButtonTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRightButton;                     //@synthesize shouldShowRightButton=_shouldShowRightButton - In the implementation block
-(id)initWithShouldShowLeftButton:(BOOL)arg1 middleButtonTitle:(id)arg2 shouldShowRightButton:(BOOL)arg3 ;
-(BOOL)shouldShowLeftButton;
-(NSString *)middleButtonTitle;
-(BOOL)shouldShowRightButton;
@end
