/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTranscodingHandler <NSObject>
@property (nonatomic,readonly) BOOL done; 
@property (nonatomic,readonly) SCD_Struct_FB100 presentationTime; 
@property (assign,nonatomic,__weak) id<FBTranscodingHandlerDelegate> delegate; 
@required
-(void)startTranscodingWhenReady;
-(void)setDelegate:(id)arg1;
-(id<FBTranscodingHandlerDelegate>)delegate;
-(BOOL)done;
-(SCD_Struct_FB100)presentationTime;

@end
