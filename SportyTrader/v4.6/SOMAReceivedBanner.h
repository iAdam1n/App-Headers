/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSData, NSMutableArray, NSURL, NSString;


@protocol SOMAReceivedBanner <NSObject>
@property (nonatomic,copy,readonly) NSData * richMediaData; 
@property (nonatomic,copy,readonly) NSMutableArray * beacons; 
@property (nonatomic,copy,readonly) NSURL * mediaFileURL; 
@property (nonatomic,copy,readonly) NSString * adText; 
@property (nonatomic,copy,readonly) NSURL * imageURL; 
@property (nonatomic,readonly) int adType; 
@property (nonatomic,copy,readonly) NSURL * clickURL; 
@required
-(NSMutableArray *)beacons;
-(NSData *)richMediaData;
-(NSString *)adText;
-(id)imageUrl;
-(id)clickUrl;
-(NSURL *)mediaFileURL;
-(NSURL *)clickURL;
-(id)mediaFile;
-(int)status;
-(id)errorMessage;
-(int)errorCode;
-(NSURL *)imageURL;
-(int)adType;

@end
