/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFilmStripViewDelegate <NSObject>
@required
-(void)filmStripViewDidScroll:(id)arg1;
-(void)filmStripViewWillBeginDragging:(id)arg1;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)filmStripViewDidEndDecelerating:(id)arg1;
-(void)filmStripViewDidBeginZooming:(id)arg1;
-(void)filmStripViewDidEndZooming:(id)arg1;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB257)arg2;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB257)arg2;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB257)arg2;
-(void)filmStripViewDidEndScrubbing:(id)arg1;

@end
