/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IFlurryHttpAsyncTask <NSObject>
@property (nonatomic,retain) NSString * tag; 
@required
+(id)get:(id)arg1 headerFields:(id)arg2 delegate:(id)arg3;
+(id)sendMethod:(id)arg1 to:(id)arg2 body:(id)arg3 headerFields:(id)arg4 delegate:(id)arg5;
+(id)post:(id)arg1 body:(id)arg2 headerFields:(id)arg3 delegate:(id)arg4;
+(id)sendMethod:(id)arg1 to:(id)arg2 body:(id)arg3 headerFields:(id)arg4 delegate:(id)arg5 startImmediately:(BOOL)arg6;
+(id)sendMethod:(id)arg1 to:(id)arg2 body:(id)arg3 headerFields:(id)arg4 timeoutInterval:(int)arg5 useCachePolicy:(unsigned long long)arg6 delegate:(id)arg7 startImmediately:(BOOL)arg8;
+(id)queryDictionaryToString:(id)arg1;
+(id)get:(id)arg1 delegate:(id)arg2;
+(id)post:(id)arg1 body:(id)arg2 delegate:(id)arg3;
+(id)stringToQueryDictionary:(id)arg1;
+(id)urlWithProtocol:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4 query:(id)arg5;
-(void)startInRunLoop:(id)arg1;
-(NSString *)tag;
-(void)setTag:(id)arg1;

@end
