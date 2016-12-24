/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPSessionOperation.h>

@protocol FBMPSessionOperation <NSObject>
@end


@class NSString;

@interface FBMPSessionOperation : NSObject <FBMPSessionOperation> {

	variant<FBMPSessionConnectOperation, FBMPSessionDisconnectOperation, FBMPSessionReplaceOperation, FBMPSessionBeginTrackingMovingOperation, FBMPSessionEndTrackingMovingOperation, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_> _operation;

}

@property (nonatomic,readonly) variant<FBMPSessionConnectOperation operation;              //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(variant<FBMPSessionConnectOperation)operation;
-(id)initWithOperation:(variant<FBMPSessionConnectOperation, FBMPSessionDisconnectOperation, FBMPSessionReplaceOperation, FBMPSessionBeginTrackingMovingOperation, FBMPSessionEndTrackingMovingOperation, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_, boost::detail::variant::void_>=ialigned_storage<16, 8>=(data_t=[16c]a8)}}Ref)arg1 ;
@end
