/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SKDataUploadDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@interface SKDataUpload : NSObject {

	id<SKDataUploadDelegate> delegate;

}

@property (assign,nonatomic) id<SKDataUploadDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithDataUpload:(id)arg1 currentChecksum:(int)arg2 newChecksum:(int)arg3 delegate:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<SKDataUploadDelegate>)arg1 ;
-(id<SKDataUploadDelegate>)delegate;
@end

