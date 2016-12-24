/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBLigerProtocol : NSObject
+(NetworkStatusMonitor*)getNetworkStatusMonitor;
+(BOOL)isFBLigerProtocolEnabled;
+(void)setUserCertEnabled:(BOOL)arg1 ;
+(void)initLigerWithConfig:(id)arg1 ;
+(void)setNetworkStateProvider:(id)arg1 ;
+(id)getCircularLogLines;
+(BOOL)shouldLigerHandleUrlOnApp:(id)arg1 ;
+(void)verifyProxyState;
+(void)onNetworkChangeWithPreviousState:(id)arg1 withCurrentState:(id)arg2 withUnknownState:(id)arg3 ;
+(BOOL)canLigerHandleUrl:(id)arg1 ;
+(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addObserverToHelper:(const shared_ptr<facebook::liger::LigerPushNotificationCallback>*)arg1 prefixes:(unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >*)arg2 executor:(Executor*)arg3 observerHelper:(ObservableHelper<facebook::liger::LigerPushNotificationCallbackWrapper>*)arg4 ;
+(void)callPushCallbacks:(const HTTPRequest*)arg1 observerHelper:(ObservableHelper<facebook::liger::LigerPushNotificationCallbackWrapper>*)arg2 ;
+(sockaddr_storage)getDNSAnswers:(id)arg1 withFamily:(unsigned char)arg2 ;
+(id)getCircularLogLinesNonBlocking;
+(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)addObserver:(const shared_ptr<facebook::liger::LigerPushNotificationCallback>*)arg1 prefixes:(unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >*)arg2 executor:(Executor*)arg3 ;
+(void)callPushCallbacks:(const HTTPRequest*)arg1 ;
+(HTTPClientSettings*)settings;
+(void)setUserDisabled:(BOOL)arg1 ;
@end
