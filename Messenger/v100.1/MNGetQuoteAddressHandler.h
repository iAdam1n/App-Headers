/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation;
@class NSString, FBMobileConfigContextManager;

@interface MNGetQuoteAddressHandler : NSObject {

	NSString* _selectedAddress;
	id<MNModalPresentation> _modalPresenter;
	FBMobileConfigContextManager* _configManager;

}
-(void)_didSelectOpenInMapsAction;
-(void)_didSelectOpenInGoogleMapsAction;
-(void)_didSelectCopyAddressAction;
-(id)_addressActionSheetItems;
-(void)_performAddressAction:(long long)arg1 ;
-(id)initWithConfigManager:(id)arg1 modalPresenter:(id)arg2 ;
-(void)openAddressActionSheetWithAddress:(id)arg1 ;
@end
