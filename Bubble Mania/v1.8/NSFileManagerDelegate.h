/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileManagerDelegate <NSObject>
@optional
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldMoveItemAtURL:(id)arg2 toURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldLinkItemAtURL:(id)arg2 toURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtURL:(id)arg3 toURL:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
-(BOOL)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;
-(BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
-(BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;

@end

