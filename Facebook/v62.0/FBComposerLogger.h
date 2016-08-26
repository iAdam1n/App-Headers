/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerLogger.h>

@protocol FBComposerLogger <NSObject>
@required
-(void)logEvent:(id)arg1 extra:(id)arg2;
-(void)logEventWithCommonExtra:(id)arg1 extra:(id)arg2;

@end


@class NSString;

@interface FBComposerLogger : NSObject <FBComposerLogger> {

	NSString* _compositionID;
	NSString* _currentUserFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logTagCreateRequest:(id)arg1 tagCount:(long long)arg2 session:(id)arg3 ;
+(id)dataForError:(id)arg1 ;
+(id)dataForNetworkStatus:(id)arg1 numberOfRequestsSent:(long long)arg2 done:(BOOL)arg3 ;
-(void)logMediaBatchEvent:(id)arg1 publisherData:(id)arg2 extra:(id)arg3 ;
-(void)logEvent:(id)arg1 publisherData:(id)arg2 status:(id)arg3 done:(BOOL)arg4 error:(id)arg5 extra:(id)arg6 numberOfRequestsSent:(long long)arg7 ;
-(void)logMediaBatchEvent:(id)arg1 publisherData:(id)arg2 status:(id)arg3 done:(BOOL)arg4 error:(id)arg5 extra:(id)arg6 numberOfRequestsSent:(long long)arg7 ;
-(void)logEvent:(id)arg1 module:(id)arg2 ;
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(id)initWithCompositionID:(id)arg1 session:(id)arg2 ;
-(void)logEventWithCommonExtra:(id)arg1 extra:(id)arg2 ;
-(void)logEvent:(id)arg1 error:(id)arg2 extra:(id)arg3 ;
-(void)logEvent:(id)arg1 publisherData:(id)arg2 extra:(id)arg3 ;
@end
