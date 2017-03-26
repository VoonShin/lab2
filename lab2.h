using namespace std;

class Game
{
	public:
		double Expected_scoreA(int r_a,int r_b);
		double Expected_scoreB(int r_a,int r_b);
		int RatingA(int r_a, int k, double a_a, double e_a);
		int RatingB(int r_b, int k, double a_b, double e_b);
	private:
		int r_a, r_b;
		double e_a, e_b,a_a,a_b;
};

