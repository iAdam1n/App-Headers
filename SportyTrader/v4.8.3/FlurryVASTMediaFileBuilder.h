/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FlurryVASTMediaFileBuilder : NSObject {

	NSMutableDictionary* properties;

}
-(void)resetBuilder;
-(id)withMediaFileId:(id)arg1 ;
-(id)withMediaFileType:(id)arg1 ;
-(id)withMediaFileApiFramework:(id)arg1 ;
-(id)withMediaFileDeliveryType:(int)arg1 ;
-(id)withMediaFileHeight:(int)arg1 ;
-(id)withMediaFileWidth:(int)arg1 ;
-(id)withMediaFileBitRate:(int)arg1 ;
-(id)withMediaFileScalable:(BOOL)arg1 ;
-(id)withMediaFileMaintainAspectRatio:(BOOL)arg1 ;
-(id)withMediaFileUrl:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)build;
@end

