/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcSessionDescription, NSMutableArray, NSString;

@interface FBWebrtcSdp : NSObject <TBase, NSCoding> {

	FBWebrtcSessionDescription* __sessionDescription;
	NSMutableArray* __mediaDescriptions;
	BOOL __sessionDescription_isset;
	BOOL __mediaDescriptions_isset;

}

@property (setter=setSessionDescription:,getter=sessionDescription,nonatomic,retain) FBWebrtcSessionDescription * sessionDescription; 
@property (setter=setMediaDescriptions:,getter=mediaDescriptions,nonatomic,retain) NSMutableArray * mediaDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setMediaDescriptions:(NSMutableArray *)arg1 ;
-(id)initWithSessionDescription:(id)arg1 mediaDescriptions:(id)arg2 ;
-(BOOL)sessionDescriptionIsSet;
-(void)unsetSessionDescription;
-(NSMutableArray *)mediaDescriptions;
-(BOOL)mediaDescriptionsIsSet;
-(void)unsetMediaDescriptions;
-(FBWebrtcSessionDescription *)sessionDescription;
-(void)setSessionDescription:(FBWebrtcSessionDescription *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
