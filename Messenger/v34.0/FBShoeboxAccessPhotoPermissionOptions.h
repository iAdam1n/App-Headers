/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/SPAccessPhotoPermissionOptions.h>

@class NSString;

@interface FBShoeboxAccessPhotoPermissionOptions : NSObject <SPAccessPhotoPermissionOptions> {

	int _viewStyle;

}

@property (assign,nonatomic) int viewStyle;                         //@synthesize viewStyle=_viewStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionWhenDenied;
-(id)descriptionWhenUndetermined;
-(BOOL)onDarkBackground;
-(BOOL)isDisplayedCondensed;
-(int)viewStyle;
-(void)setViewStyle:(int)arg1 ;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(id)headerString;
@end

