/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/GCKPB_PBGeneratedMessage.h>

@class GCKPB_PBMutableArray;

@interface GCKPB_PBServiceOptions : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasMulticastStub; 
@property (assign,nonatomic) BOOL multicastStub; 
@property (assign,nonatomic) BOOL hasFailureDetectionDelay; 
@property (assign,nonatomic) double failureDetectionDelay; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasUninterpretedOptionArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * uninterpretedOptionArray; 
+(id)descriptor;
@end

