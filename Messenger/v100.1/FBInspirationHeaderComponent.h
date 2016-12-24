/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class NSString;

@interface FBInspirationHeaderComponent : CKCompositeComponent {

	NSString* _personGraphQLID;
	id<FBIntentHandler> _intentHandler;

}
+(id)newWithPersonGraphQLID:(id)arg1 name:(id)arg2 subtitle:(id)arg3 session:(id)arg4 intentHandler:(id)arg5 options:(SCD_Struct_FB119)arg6 ;
-(void)_didTapAvatar:(id)arg1 ;
@end
