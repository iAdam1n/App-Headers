/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBThrowbackSettingsManager, NSString;

@interface FBThrowbackSubscribeButtonComponent : CKCompositeComponent {

	FBThrowbackSettingsManager* _settingsManager;
	NSString* _analyticsSource;

}
+(id)newWithFont:(id)arg1 textColor:(id)arg2 title:(id)arg3 titleInsets:(UIEdgeInsets)arg4 backgroundImages:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg5 size:(const CKComponentSize*)arg6 settingsManager:(id)arg7 analyticsSource:(id)arg8 ;
+(id)initialState;
@end
