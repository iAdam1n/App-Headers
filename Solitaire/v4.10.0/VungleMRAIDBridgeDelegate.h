/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VungleMRAIDBridgeDelegate <NSObject>
@optional
-(void)handleNativeCommandCloseWithBridge:(id)arg1;
-(void)bridge:(id)arg1 handleDisplayForDestinationURL:(id)arg2;
-(void)bridge:(id)arg1 handleNativeCommandUseCustomClose:(long long)arg2;
-(void)bridge:(id)arg1 handleNativeCommandSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
-(void)bridge:(id)arg1 handleNativeCommandTPATKey:(id)arg2;
-(void)bridge:(id)arg1 handleNativeCommandIsSuccessfulView:(BOOL)arg2;
-(void)handleNativeCommandCriticalErrorWithBridge:(id)arg1;

@required
-(void)MRAIDBridge:(id)arg1 didFailToLoadWebView:(id)arg2 error:(id)arg3;
-(void)MRAIDBridge:(id)arg1 didLoadAdInWebView:(id)arg2;

@end
