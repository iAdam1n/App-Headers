/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString, NSArray, FBMImageUrlCollection;


@protocol FBGenericThread <FBConversationContact>
@property (nonatomic,copy,readonly) NSString * genericThreadFbId; 
@property (nonatomic,readonly) NSArray * genericThreadParticipants; 
@property (nonatomic,readonly) BOOL genericThreadHasCustomName; 
@property (nonatomic,copy,readonly) NSString * genericThreadPicHash; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@required
-(FBMImageUrlCollection *)imageUrls;
-(NSArray *)genericThreadParticipants;
-(NSString *)genericThreadFbId;
-(BOOL)genericThreadHasCustomName;
-(NSString *)genericThreadPicHash;

@end

