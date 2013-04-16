//  LAWalkthroughViewController.h
//  LAWalkthrough
//
//  Created by Larry Aasen on 4/11/13.
//
// Copyright (c) 2013 Larry Aasen (http://larryaasen.wordpress.com/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

@interface LAWalkthroughViewController : UIViewController <UIPageViewControllerDelegate, UIScrollViewDelegate>
{
  UIScrollView *scrollView;
  UIPageControl *pageControl;
  BOOL pageControlUsed;
}

@property (nonatomic,strong) UIImage *backgroundImage;
@property (nonatomic,readonly) UIImageView *backgroundImageView;
@property (nonatomic,readonly) UIButton *nextButton;
@property (nonatomic) UIImage *nextButtonImage;
@property (nonatomic) NSString *nextButtonText;
@property (nonatomic,readonly) NSInteger numberOfPages;
@property (nonatomic) NSInteger pageControlBottomMargin;
@property (nonatomic,readonly) CGRect pageControlFrame;
@property (nonatomic,readonly,copy) NSArray *pages;

- (UIView *)addPageWithBody:(NSString *)bodyText;
- (UIView *)addPageWithNibName:(NSString *)name bundle:(NSBundle *)bundleOrNil;
- (UIView *)addPageWithView:(UIView *)pageView;

// Actions
- (void)displayNextPage;

// UI Customization
- (void)changePage;
- (UIPageControl *)createPageControl;
- (CGRect)defaultPageFrame;
- (CGPoint)nextButtonOrigin;
- (CGRect)pageControlFrame;

@end
